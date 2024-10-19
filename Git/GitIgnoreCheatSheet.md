# Git ignore cheat sheet
## ignoreing files
`*` - ignores every file in the repo
`*.c` - ignores ervery file with a c extention
`/mySubDir/*`- ignores every file in th sub directory
`MyFile.txt` - ignore my file 

## do not ignore
`!*.c` - do not ignore files with c extetnion
`!/mySubdir/*` - do not ignore files i the sub directory
`!MyFile.txt` - do not ignore my file

## template ignore everything expcet
`*
!.gitignore
!MyFile.txt`

## miscellaneous
`# my comment ` - used for comments 

## gitignore Generator
[Generator](https://www.toptal.com/developers/gitignore)
