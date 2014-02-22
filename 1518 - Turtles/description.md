#1518 - Turtles

## Description

Rafael, at his first day of work at the zoo, was given the task 
they give to all newcomers: take care of the turtles. Rafael 
found that so easy that he decided to take a nap, but when he 
woke up he saw himself in a very complicated situation: the turtles 
were running away. 

As he is at his first day, Rafael doesn't want to disappoint 
the zoo's boss, so he decided to catch and stop all the turtles 
in the minimum amount of time possible. 

The place where they are can be seen as a plane, and Rafael is 
at the position [x, y]. In each second, Rafael can move at most 
two positions at the horinzontal or vertical, or at most one 
position at the diagonal. 

Rafael has to stop three turtles, which are at the positions 
[x1, y1], [x2, y2] and [x3, y3], respectively. The turles, on 
the other hand, can only move one position per second, and in 
only one direction predefined: Up ([xi, yi+1]) or Right ([xi+1, 
yi]). They are always moving. 

To stop a turtle Rafael must be at the same position as the given 
turtle. Rafael can choose to stop the turtles at any given order 
he wants. Find out the minimum amount of time necessary to stop 
all the three turtles. 

## Input

There will be several test cases. Each test case starts with 
two integers x and y (1 ≤ x, y ≤ 1000), which indicates that 
Rafael is at the position [x, y] of the plane. 

Following, there will be three lines, each containing two integers 
xi and yi (1 ≤ xi, yi ≤ 1000), indicating that the i-th turtle 
is at the position [xi, yi], and one character ci, indicating 
which direction the i-th turtle is running: 'D' – Right, or 'C' 
– Up. 

The plane where Rafael and the turtles are extends from the position 
[1, 1] (lower left corner) to the position [10⁵, 10⁵] (upper 
right corner), therefore there is a lot of space for the chase. 
Two turtles will never be at the same position at the same time. 

The last test case is indicated when x = y = 0, which should 
not be processed. 

## Output

For each test case, print one integer, representing the minimum 
amount of time needed to stop all the turles, in the order chosen 
by Rafael. 

