# /usr/bin/pypy3

from datetime import datetime as time
from sys import version as pyver


def basic_format(string: str, property_name: str, short_property_name: str):
	# --- Head
	lines = string.split('\n')
	cache = []

	macro_names = []
	define_checks = []
	informal_names = []

	defines = ""
	check_commands = ""

	index = 0

	# --- Body
	# -- Formatting
	for i in lines:
		cache = i.split(' ')
		if len(cache) <= 1:
			continue

		informal_names.append(cache[0])
		macro_names.append(cache[1])
		define_checks.append(cache[2:])

	# -- Generating preprocessor scripts
	for i in range(len(macro_names)):
		defines += "# define " + macro_names[i] + " " + str(index) + "\n"
		index += 1

		check_commands += "if defined(" + define_checks[i][0] + ")"

		if len(define_checks[i]) > 1:
			check_commands += " || defined("

			for j in define_checks[i][1:-1]:
				check_commands += j + ") || defined("

			check_commands += define_checks[i][-1] + ")"
		check_commands += "\n\t# define " +	property_name + " " + macro_names[i] + 	"\n"
		check_commands += "\t# define " +	property_name + '_TEXT U"' + informal_names[i] + '"\n\n'
		check_commands += "# el"

	return defines[:-1], check_commands


def main():
	# -- Versions
	major_versioning_names = open("./ETC/_Generation/MajorVersioningNames.txt", 'r').readlines()
	versions_file_read = open("./ETC/_Generation/Version.txt", 'r').readline

	# - Major version
	major_version = versions_file_read()[:-1]

	# - Standard revision
	standard_revision = versions_file_read()[:-1]

	# - Commit number
	commit_number = versions_file_read()[:-1]

	# - Post-phiccs
	postfix = versions_file_read()[:-1]

	# -- Timings
	today = time.now()

	# - Major timings
	year = today.year
	month = today.month
	day = today.day

	# - Minor timings
	hour = today.hour
	minute = today.minute
	second = today.second

	# -- Platform
	# - Alton's Build
	os_defines, os_pre_processor_commands = basic_format(
		open("./ETC/_Generation/OperatingSystemMacros.txt", 'r').read(),
		"ALTON_OS",
		"OS"
	)
	arch_defines, arch_pre_processor_commands = basic_format(
		open("./ETC/_Generation/ArchitectureMacros.txt", 'r').read(),
		"ALTON_ARCH",
		"ARCH"
	)
	compiler_defines, compiler_pre_processor_commands = basic_format(
		open("./ETC/_Generation/CompilerMacros.txt").read(),
		"ALTON_COMPILER",
		"COMPILER"
	)

	# - Python's Build
	pyplatform = ''.join(pyver.split('\n'))

	# -- Files
	template = open("./ETC/_Generation/ExampleVersionData.hpp", "r")
	output = open("./ETC/VersionData.hpp", "w")

	# -- Text processing
	text = template.read()
	text %= (
		major_version,
		major_versioning_names[
			int("0x" + major_version, 16)
		][:-1],
		standard_revision,
		commit_number,
		postfix,

		str(year),
		str(month),
		str(day),

		str(hour),
		str(minute),
		str(second),

		os_defines,
		os_pre_processor_commands,
		arch_defines,
		arch_pre_processor_commands,
		compiler_defines,
		compiler_pre_processor_commands,

		pyplatform
	)

	output.write(text)
	output.close()


if __name__ == "__main__":
	main()
