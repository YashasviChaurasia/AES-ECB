#!/bin/bash
name=$(date);
echo $name;
git add .
git commit -S -sm "Demo commit @ $name"
git push origin test1
echo "Success ";