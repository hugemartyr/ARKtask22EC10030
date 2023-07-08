**Hii Intro to my thought process on implementation of question 3**

This question needed a differring approach than the other questions as it seemed vwry easy at its face value. My first thought after seeing the question were:
1.Use Mapgeneration.py to generate the entire map to the compiler.
2.Use getmap function to load map into the current program
3.Use getSnapshot to know current whereabouts of the drone
4.compare my current snapshot with the entire map Bit-by-bit with the map from top left going right and down
5.But this was easier said than done , cause even if the drone detects its location wrt to the map., The strategy function can be easily asked to guess the easiest root out, like which end north, south,etc is the closest , but it will hit a snag when it encounters dead ends , cuz when i designed the algorithm before, it didn't account for these conditions.
6.I tried numerous ways to solve this snag , then an idea hit me, that i could backtrack and keep a count of number of options i get along the way,ie, the program will keep track of the number of places along the way it has got two or more options to move, and go through them in an orderly fashion, like it'll first go the straight way, if that ends in a dead end ,take the left path and then the right so on. But this would pose a problem as it will just get the dron out of the maze and backtracking the path would require external inputs. So I tried the following approach
7.after I get stuck at more than 1 to 2 dead ends , Ill have an somewhat irregular path of the drone's relative postion ready.This will help me terminate the movemnet program's loop. Now i will start comparing this irregular shape with the map i already have store in the compiler.
8.This approach is also useful as it helps eliminate the cases where the template of the map generation would match with the numerous similar places on the map, moving the drone a little till the dead ends may help us figure its realtive postion to a relatively small error.
9.Sorry couldn't code this one too cause my python knowledge lies at the very basics , more like 'hello world' types ngl.