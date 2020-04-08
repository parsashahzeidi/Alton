# Versioning

Alton's versioning system consists of 3 ~ 4 parts:

* The Alfie standard's release codename. The list is presented at [/Path/To/Alton/ETC/_Generation/MajorVersioningNames.txt](ETC/_Generation/MajorVersioningNames.txt). This text is independent of the revision number and the patch version. The *ALFIE_MAJOR_VERSION* variable is used for finding this string.
* The Alfie version supported; in 2-digit capitalized hex. The *ALFIE_MAJOR_VERSION* variable is the code equivelant for this number.
* The Revision of the version; in 2-digit capitalized hex. The *ALTON_REVISION* variable is the code equivelant for this number.
* The Patch version; in 2-digit capitalized hex. The *ALTON_COMMIT_NUMBER* variable is the code equivelant for this number.
* Optionally, the version ending; usually *CV* + number, or *SR*, standing for *Candidate Version* and *Stable Release*, respectively.

The versioning structure is designed to be compatible with [SEMVER](https://semver.org/).
