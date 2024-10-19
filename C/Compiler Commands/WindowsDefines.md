# Defines used in windows
## H-File defiens
`pragma once` - this is the way of protecting the h-file in case of double inclutuion Note: This does not work in linux, here you have to do:
                            `#define SOME_DEFINE 1` 
                            `#ifndef SOME_DEFINE`
                            `#endif`