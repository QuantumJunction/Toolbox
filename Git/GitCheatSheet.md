# Git cheat sheet
Source of the following is [The officail git referebce](https://git-scm.com/docs)
## Init your project
`git init` - initialization of a new of a new git folder in the current directory
`git clone <repo URL>` - clones a repository from a remote server

## Stageing
`git add <file1><file2>....` - Stageing a specific file
`git add <wildcard>` - Staging all files which fits the wildcard (e.g. `*.c` adds all the C-files)
`git add --all` - Stageing all the changes

## Commiting 
`git commit -m "Put your message here"` - Creates a commit with a message 

## Push,Pull and Fetch
`git pull` - Gets the changes form the default remote and the default branch 
`git pull <remotename> <branch>`  - Gets the changes form the specified remote and the specified branch 
`git push` - Uploads the current changes to the default remote and the default branch 
`git push <remotename> <branch>`  - Uploads the current changes to the specified remote and the specified branch 
`git fetch` - Refreshes the change information in the repo

## Braching
`git checkout <branch name>` - Switches to the specified branch 
`git checkout <commit hash>` - Switches to the specified commit of the current branch 
`git checkout -b <new branch name>` - Creates new branch 

