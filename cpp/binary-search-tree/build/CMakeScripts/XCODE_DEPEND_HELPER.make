# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.binary-search-tree.Debug:
/Users/viraltaco/Desktop/projects/Exercism/cpp/binary-search-tree/build/Debug/binary-search-tree:
	/bin/rm -f /Users/viraltaco/Desktop/projects/Exercism/cpp/binary-search-tree/build/Debug/binary-search-tree


PostBuild.binary-search-tree.Release:
/Users/viraltaco/Desktop/projects/Exercism/cpp/binary-search-tree/build/Release/binary-search-tree:
	/bin/rm -f /Users/viraltaco/Desktop/projects/Exercism/cpp/binary-search-tree/build/Release/binary-search-tree


PostBuild.binary-search-tree.MinSizeRel:
/Users/viraltaco/Desktop/projects/Exercism/cpp/binary-search-tree/build/MinSizeRel/binary-search-tree:
	/bin/rm -f /Users/viraltaco/Desktop/projects/Exercism/cpp/binary-search-tree/build/MinSizeRel/binary-search-tree


PostBuild.binary-search-tree.RelWithDebInfo:
/Users/viraltaco/Desktop/projects/Exercism/cpp/binary-search-tree/build/RelWithDebInfo/binary-search-tree:
	/bin/rm -f /Users/viraltaco/Desktop/projects/Exercism/cpp/binary-search-tree/build/RelWithDebInfo/binary-search-tree




# For each target create a dummy ruleso the target does not have to exist
