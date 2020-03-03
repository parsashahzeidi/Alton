# /usr/bin/pypy3

from datetime import datetime as time

if __name__ == "__main__":
	# -- Versions
	major_versioning_names = [
		"The Avalanche",
		"The Landslide",
		"The Earthquake",
		"The Sinkhole",
		"The Volcanic Eruption",
		"The Flood",
		"The Tsunami",
		"The Limnic Eruption",
		"The Cyclonic Storm",
		"The Blizzard",
		"The Hailstorm",
		"The IceStorm",
		"The Cold Wave",
		"The Heat Wave",
		"The Drought",
		"The Thunderstorm",
		"The Tornado",
		"The Wildfire",
		"The Solar Flare",
		"The More To Come"
	]

	# - Major version
	print ("Enter the major version number in 2 digit hex without 0x: ", end="")
	major_version = input()
	# Check
	int("0x" + major_version, 16)

	# - Standard revision
	print ("Enter the Alfie standard revision id in 2 digit hex without 0x: ", end="")
	standard_revision = input()
	# Check
	int("0x" + standard_revision, 16)

	# - Commit number
	print ("Enter the commit number in 2 digit hex without 0x: ", end="")
	commit_number = input()
	# Check
	int("0x" + commit_number, 16)
	
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

	# -- Files
	template = open("./ETC/_Generation/ExampleVersionData.hpp", "r")
	output = open("./ETC/VersionData.hpp", "w")

	# -- Text processing
	text = template.read()
	text %= (
		major_version,
		major_versioning_names[
			int("0x" + major_version, 16)
		],
		standard_revision,
		commit_number,

		str(year),
		str(month),
		str(day),

		str(hour),
		str(minute),
		str(second)
	)

	output.write(text)
	output.close()



