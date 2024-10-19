#!/bin/bash

echo 'make dir'
mkdir -p /var/opt/iobrocker

echo 'run docker command'
docker run -v /var/opt/iobrocker:/opt/iobroker \
           -p 8081:8081 \
           --restart=always\
	   --name iobrocker\
	   -h iobrocker\
           buanet/iobroker
