# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.two-fer.Debug:
/Users/viraltaco/Desktop/projects/Exercism/cpp/two-fer/build/Debug/two-fer:
	/bin/rm -f /Users/viraltaco/Desktop/projects/Exercism/cpp/two-fer/build/Debug/two-fer


PostBuild.two-fer.Release:
/Users/viraltaco/Desktop/projects/Exercism/cpp/two-fer/build/Release/two-fer:
	/bin/rm -f /Users/viraltaco/Desktop/projects/Exercism/cpp/two-fer/build/Release/two-fer


PostBuild.two-fer.MinSizeRel:
/Users/viraltaco/Desktop/projects/Exercism/cpp/two-fer/build/MinSizeRel/two-fer:
	/bin/rm -f /Users/viraltaco/Desktop/projects/Exercism/cpp/two-fer/build/MinSizeRel/two-fer


PostBuild.two-fer.RelWithDebInfo:
/Users/viraltaco/Desktop/projects/Exercism/cpp/two-fer/build/RelWithDebInfo/two-fer:
	/bin/rm -f /Users/viraltaco/Desktop/projects/Exercism/cpp/two-fer/build/RelWithDebInfo/two-fer




# For each target create a dummy ruleso the target does not have to exist
