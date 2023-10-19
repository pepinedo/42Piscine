ifconfig -a link | grep ether | awk '/ether/ {print $2}'
