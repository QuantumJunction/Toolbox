#!/bin/bash

echo 'make dir'
mkdir -p /var/opt/nodered
chmod 777 /var/opt/nodered/

echo 'run docker command'
docker run -it \
	   -v /var/opt/nodered:/data \
           -p 80:1880 \
           --restart=always \
	   --name mynodered \
           nodered/node-red
