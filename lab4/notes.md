# Lab 4 — Git & GitHub Notes

## Question 1
--global applies the setting to all my Git repositories for my user account. Without it, the setting applies only to the current repository.

## Question 2
`ls -a` showed the hidden `.git` directory, which stores Git's repository data, including its history and configuration.

## Question 3
Git listed the untracked files and folders in my coding-cafe directory. The exact count and any files I did not write were: 27 .gitignore
 create mode 100644 .vscode/launch.json
 create mode 100644 .vscode/tasks.json
 create mode 100644 README.md
 create mode 100644 notes.md
 create mode 100755 try
 create mode 100644 try.c
 create mode 100644 try.dSYM/Contents/Info.plist
 create mode 100644 try.dSYM/Contents/Resources/DWARF/try
 create mode 100644 week02/.vscode/launch.json
 create mode 100644 week02/.vscode/tasks.json
 create mode 100755 week02/CT whatever
 create mode 100644 week02/CT whatever.c
 create mode 100644 week02/CT whatever.dSYM/Contents/Info.plist
 create mode 100644 week02/CT whatever.dSYM/Contents/Resources/DWARF/CT whatever
 create mode 100755 week02/CTwhatever2
 create mode 100644 week02/CTwhatever2.c
 create mode 100644 week02/CTwhatever2.dSYM/Contents/Info.plist
 create mode 100644 week02/CTwhatever2.dSYM/Contents/Resources/DWARF/CTwhatever2
 create mode 100755 week02/CTwhatever3
 create mode 100644 week02/CTwhatever3.c
 create mode 100644 week02/CTwhatever3.dSYM/Contents/Info.plist
 create mode 100644 week02/CTwhatever3.dSYM/Contents/Resources/DWARF/CTwhatever3
 create mode 100644 week02/lab01-log.txt
 create mode 100644 week02/readme.md

## Question 4
After creating `.gitignore`, files and folders matching its patterns no longer appeared as untracked files. 

## Question 5
`.gitignore` should be committed because it tells Git which files to leave out. Sharing it helps everyone use the same ignore rules.

## Question 6
`README.md` moved from the untracked section to the staged section after `git add README.md`. It moved from the working directory to Git's staging area.

## Question 7
Git reported the commit summary, including how many files changed. My output was: .gitignore <<'EOF'
.venv/
__pycache__/
*.pyc
.DS_Store
EOF
aplle@apples-MacBook-Pro coding-cafe % cat .gitignore
.venv/
__pycache__/
*.pyc
.DS_Store
aplle@apples-MacBook-Pro coding-cafe % git status
On branch main

No commits yet

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	.gitignore
	.vscode/
	README.md
	notes.md
	try
	try.c
	try.dSYM/
	week02/

nothing added to commit but untracked files present (use "git add" to track)

## Question 8
The first seven characters are an abbreviated commit hash. They identify a commit so it can be referenced more conveniently.

## Question 9
The four steps are edit, stage, commit, and repeat.

## Question 10
`README.md` is a standard repository introduction. GitHub displays its rendered contents on the repository's front page.

## Question 11
`gh auth login` authenticated GitHub CLI through a browser and stored authentication credentials so GitHub can authorize future operations.

## Question 12
GitHub displayed `README.md` on the repository front page because it automatically renders this specially named file.

## Question 13
Pushing did not change my local commit history. It uploaded my existing commits to GitHub.

## Question 14
A private repository exists on GitHub but is only accessible to its owner and authorized collaborators. A repository that does not exist on GitHub cannot be accessed there at all.