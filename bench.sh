#!/bin/bash
for i in {1..500000}
do
   ./nvme | grep 'Operation took about'
done
