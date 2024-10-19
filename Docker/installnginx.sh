#!/bin/bash

echo 'run nginx'
docker run -it --rm -d -p 8080:80 --name web -v ~/nginxhtml:/usr/share/nginx/html nginx

