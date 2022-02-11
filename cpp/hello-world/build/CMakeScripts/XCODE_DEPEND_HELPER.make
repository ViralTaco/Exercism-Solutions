# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.hello-world.Debug:
/Users/viraltaco/Desktop/projects/Exercism/cpp/hello-world/build/Debug/hello-world:
	/bin/rm -f /Users/viraltaco/Desktop/projects/Exercism/cpp/hello-world/build/Debug/hello-world


PostBuild.hello-world.Release:
/Users/viraltaco/Desktop/projects/Exercism/cpp/hello-world/build/Release/hello-world:
	/bin/rm -f /Users/viraltaco/Desktop/projects/Exercism/cpp/hello-world/build/Release/hello-world


PostBuild.hello-world.MinSizeRel:
/Users/viraltaco/Desktop/projects/Exercism/cpp/hello-world/build/MinSizeRel/hello-world:
	/bin/rm -f /Users/viraltaco/Desktop/projects/Exercism/cpp/hello-world/build/MinSizeRel/hello-world


PostBuild.hello-world.RelWithDebInfo:
/Users/viraltaco/Desktop/projects/Exercism/cpp/hello-world/build/RelWithDebInfo/hello-world:
	/bin/rm -f /Users/viraltaco/Desktop/projects/Exercism/cpp/hello-world/build/RelWithDebInfo/hello-world




# For each target create a dummy ruleso the target does not have to exist
