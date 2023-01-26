# lab01
## software engineering

morgan bergen
jan 25 2023


### `git init`

- put the current directory you're in under git revision control
- if you type l you'll be able to see hidden files also known as dot files
- these files work at a lower level than the files you can see
- the .git folder is where all the git information is stored
- the git repository for the current directory is stashed in the `.git` directory

```
❯ git init
hint: Using 'master' as the name for the initial branch. This default branch name
hint: is subject to change. To configure the initial branch name to use in all
hint: of your new repositories, which will suppress this warning, call:
hint:
hint: 	git config --global init.defaultBranch <name>
hint:
hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
hint: 'development'. The just-created branch can be renamed via this command:
hint:
hint: 	git branch -m <name>
Initialized empty Git repository in /Users/owner/Documents/2023spring/eecs348/.git/

❯ l
total 16
drwxr-xr-x@ 5 owner  staff   160B Jan 25 19:33 .
drwxr-xr-x@ 8 owner  staff   256B Jan 25 19:33 ..
-rw-r--r--@ 1 owner  staff   6.0K Jan 25 16:05 .DS_Store
drwxr-xr-x@ 9 owner  staff   288B Jan 25 20:19 .git
drwxr-xr-x@ 9 owner  staff   288B Jan 25 20:17 assets
```

## git
`drwxr-xr-x@ 9 owner  staff   288B Jan 25 20:19 .git`

## `git diff --color`

```
...skipping...
diff --git a/assets/notes/lab01.md b/assets/notes/lab01.md
index 1880921..379a997 100644
--- a/assets/notes/lab01.md
+++ b/assets/notes/lab01.md
@@ -39,5 +39,5 @@ drwxr-xr-x@ 9 owner  staff   288B Jan 25 20:17 assets
 ## git
 `drwxr-xr-x@ 9 owner  staff   288B Jan 25 20:19 .git`

-
+- the .git folder is where all the git information is stored
```

- `git diff` shows the difference between the current state of the repository and the last commit
- `--color` makes the output colored
- `git diff` is a very useful command

## `git add hello.c`

in git "add" means this:  move the change you made to the staging area.  the change could be a modification to a tracked file, or it could be a creation of a brand new file.  this is a point of confusion for those of you owho are familiar with other version control system such as subversion.  at this point `git diff` will report no change.  our change from hello to bye has been moved into staging already.  so thi smean that `git diff` report the difference between the staging area and the working copy of the file.

```
END
```
to see the difference between the last commit and the staging area, add `--cached` option.

```
diff --git a/.DS_Store b/.DS_Store
new file mode 100644
index 0000000..5008ddf
Binary files /dev/null and b/.DS_Store differ
diff --git a/a.out b/a.out
new file mode 100755
index 0000000..254c2d0
Binary files /dev/null and b/a.out differ
diff --git a/assets/notes/lab01.md b/assets/notes/lab01.md
index 7c70136..7f2dfaf 100644
--- a/assets/notes/lab01.md
+++ b/assets/notes/lab01.md
@@ -39,4 +39,31 @@ drwxr-xr-x@ 9 owner  staff   288B Jan 25 20:17 assets
 ## git
 `drwxr-xr-x@ 9 owner  staff   288B Jan 25 20:19 .git`

+## `git diff --color`

+```
+...skipping...
+diff --git a/assets/notes/lab01.md b/assets/notes/lab01.md
+index 1880921..379a997 100644
+--- a/assets/notes/lab01.md
++++ b/assets/notes/lab01.md
+@@ -39,5 +39,5 @@ drwxr-xr-x@ 9 owner  staff   288B Jan 25 20:17 assets
+ ## git
+ `drwxr-xr-x@ 9 owner  staff   288B Jan 25 20:19 .git`
+
+-
++- the .git folder is where all the git information is stored
+```
+
+- `git diff` shows the difference between the current state of the repository and the last commit
+- `--color` makes the output colored
+- `git diff` is a very useful command
+
+## `git add hello.c`
+
+in git "add" means this:  move the change you made to the staging area.  the change could be a modification to a tracked file, or it could be a creation of a brand new file.  this is a point of confusion for those of you owho are familiar with other version control system such as subversion.  at this point `git diff` will report no change.  our change from hello to bye has been moved into staging already.  so thi smean that `git diff` report the difference between the staging area and the working copy of the file.
+
+```
+END
+```
+to see the difference between the last commit and the staging area, add `--cached` option.
diff --git a/hello.c b/hello.c
new file mode 100644
index 0000000..440d0e4
--- /dev/null
+++ b/hello.c
@@ -0,0 +1,6 @@
+#include <stdio.h>
+
+int main() {
+    printf("%s\n", "hello world");
+    return(0);
+}
```

## `git commit -m "first commit"`


## `git log`
    ```
commit 0c1dd796037a1923156472344c2107c3fc58b05f (HEAD -> master)
    Author: morgan bergen <morgan@ku.edu>
    Date:   Wed Jan 25 20:45:43 2023 -0600

    changed hello to bye

    commit 46275665021746d49ef865c68ca5c8097e325bad
    Author: morgan bergen <morgan@ku.edu>
    Date:   Wed Jan 25 20:34:15 2023 -0600

    added hello-world program
    (END
     ```

## `git log -stat`

- git log allows you to see the history of the repository

```
commit 0c1dd796037a1923156472344c2107c3fc58b05f (HEAD -> master)
Author: morgan bergen <morgan@ku.edu>
Date:   Wed Jan 25 20:45:43 2023 -0600

    changed hello to bye

 .DS_Store             | Bin 0 -> 6148 bytes
 a.out                 | Bin 0 -> 33426 bytes
 assets/notes/lab01.md |  86 ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 hello.c               |   6 ++++++
 4 files changed, 92 insertions(+)

commit 46275665021746d49ef865c68ca5c8097e325bad
Author: morgan bergen <morgan@ku.edu>
Date:   Wed Jan 25 20:34:15 2023 -0600

    added hello-world program

 assets/389362568_8530b0c892.jpg                                  | Bin 0 -> 28002 bytes
 assets/engineering-software-products.pdf                         | Bin 0 -> 7044307 bytes
 assets/lecture_notes/01-course-intro.pdf                         | Bin 0 -> 953192 bytes
 assets/lecture_notes/02-software-life-cycle.pdf                  | Bin 0 -> 1262689 bytes
 assets/lecture_notes/03-sw-dev-tools.pdf                         | Bin 0 -> 1043639 bytes
 assets/lecture_notes/04-intro-C.pdf                              | Bin 0 -> 964323 bytes
 assets/lecture_notes/lab_01_files/git-short-tutorial.pdf         | Bin 0 -> 426751 bytes
 assets/lecture_notes/lab_01_files/lab_description.png            | Bin 0 -> 103340 bytes
 assets/lecture_notes/lab_01_files/supplementary_instructions.pdf | Bin 0 -> 1370526 bytes
 assets/notes/.DS_Store                                           | Bin 0 -> 6148 bytes
 assets/notes/01-course-intro.md                                  |   0
 assets/notes/02-software-life-cycle.md                           | 119 ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 assets/notes/03-sw-dev-tools.md                                  |   0
 assets/notes/04-intro-c.md                                       |   0
 assets/notes/lab01.md                                            |  42 +++++++++++++++++++++++++++++
 assets/notes/main/hello-pgm                                      | Bin 0 -> 33430 bytes
 assets/notes/main/hello-pgm.c                                    |  11 ++++++++
 assets/notes/main/hello-pgm.exe                                  | Bin 0 -> 33434 bytes
 assets/software-engineering-practitioner.pdf                     | Bin 0 -> 75105631 bytes
 assets/software-engineering.pdf                                  | Bin 0 -> 12000005 bytes
 assets/uml-distilled.pdf                                         | Bin 0 -> 1627604 bytes
 21 files changed, 172 insertions(+)
(END)
```

## the tracked, modified, and the staged

a file in a directory under git revision control us either tracked or untracked.
a tracked file can be unmodified, modified but unstaged, or modified and staged

1.  untracked:  object files and executable files that cann be rebuilt are usually not tracked

2.  tracked, unmodified:  the file is in the git repository, and it has not been modified since the last commit `git status` says nothing about the file

3.  tracked, modified, but unstaged:  you modified the file, but didn't `git add` the file.  the cgange has been staged, so it's not realy for commit yet.

4.  tracked, modified, and staged:  you modified the file, and did `git add` the file.  the change has been moved to the staging area.  it is ready for commit.  the staging area is also called the "index"

## other useful git commands

- `git mv old-filename new-filename`:  to rename a tracked file
- `git rm filename`:  to remove a tracked file from the repository.  the `mv` or `rm` actions are automatically staged fro you, but you still need to git commit your actions.
- `git checkout --filename`:  sometimes you make some changes to a file, but regret it, and want to go back to the version last committed.  if the file has not been staged yet you can all that
- `git reset HEAD filename`:  if the file has been staged, you must first unstage it

- `git help status` or `man git-status`:  there are two ways to display a manual page for a git command.  for example, for the git status command, you can type one of the two commands

- `git grep printf`:  `git grep` searches for specified patterns in all files in the repo.  to see all places you called `printf()`

