#!/bin/bash

# SOURCE: https://pastebin.pl/view/85d80008

# make -C philo_bonus && clear
# exe=./philo_bonus/philo_bonus
make re && clear
exe=./philo

tests=1

x=1
time=0.1
echo -e "\e[41m 1 400 100 100 7 should die\e[0m"
while [ $x -le $tests ]; do
	echo -e "\e[1;31mTest: $x\e[0m"
	$exe 1 400 100 100 7 | grep die
	sleep $time
	x=$(($x + 1))
done

echo

x=1
time=0.1
echo -e "\e[42m 4 210 100 100 7 not die\e[0m"
while [ $x -le $tests ]; do
	echo -e "\e[1;32mTest: $x\e[0m"
	$exe 4 210 100 100 7 | grep die
	sleep $time
	x=$(($x + 1))
done

echo

x=1
time=0.1
echo -e "\e[41m 1 800 200 200 7 should die\e[0m"
while [ $x -le $tests ]; do
	echo -e "\e[1;31mTest: $x\e[0m"
	$exe 1 800 200 200 7 | grep die
	sleep $time
	x=$(($x + 1))
done

echo

x=1
time=0.1
echo -e "\e[42m 5 800 200 200 7 not die\e[0m"
while [ $x -le $tests ]; do
	echo -e "\e[1;32mTest: $x\e[0m"
	$exe 5 800 200 200 7 | grep die
	sleep $time
	x=$(($x + 1))
done

echo

x=1
time=0.1
echo -e "\e[41m 4 310 200 100 7 should die\e[0m"
while [ $x -le $tests ]; do
	echo -e "\e[1;31mTest: $x\e[0m"
	$exe 4 310 200 100 7 | grep die
	sleep $time
	x=$(($x + 1))
done

echo

x=1
time=0.1
echo -e "\e[42m 5 400 100 100 7 not die\e[0m"
while [ $x -le $tests ]; do
	echo -e "\e[1;32mTest: $x\e[0m"
	$exe 5 400 100 100 7 | grep die
	sleep $time
	x=$(($x + 1))
done

echo

x=1
time=0.1
echo -e "\e[41m 5 200 100 100 7 should die\e[0m"
while [ $x -le $tests ]; do
	echo -e "\e[1;31mTest: $x\e[0m"
	$exe 5 200 100 100 7 | grep die
	sleep $time
	x=$(($x + 1))
done

echo

x=1
time=0.1
echo -e "\e[42m 3 400 100 100 7 not die\e[0m"
while [ $x -le $tests ]; do
	echo -e "\e[1;32mTest: $x\e[0m"
	$exe 3 400 100 100 7 | grep die
	sleep $time
	x=$(($x + 1))
done

echo

x=1
time=0.1
echo -e "\e[41m 3 200 100 100 7 should die\e[0m"
while [ $x -le $tests ]; do
	echo -e "\e[1;31mTest: $x\e[0m"
	$exe 3 200 100 100 7 | grep die
	sleep $time
	x=$(($x + 1))
done

echo

x=1
time=0.1
echo -e "\e[42m 4 410 200 200 7 not die\e[0m"
while [ $x -le $tests ]; do
	echo -e "\e[1;32mTest: $x\e[0m"
	$exe 4 410 200 200 7 | grep die
	sleep $time
	x=$(($x + 1))
done

echo

x=1
time=0.1
echo -e "\e[41m 4 399 200 200 7 should die\e[0m"
while [ $x -le $tests ]; do
	echo -e "\e[1;31mTest: $x\e[0m"
	$exe 4 399 200 200 7 | grep die
	sleep $time
	x=$(($x + 1))
done

echo

make -C ./philo fclean
make -C ./philo_bonus fclean
