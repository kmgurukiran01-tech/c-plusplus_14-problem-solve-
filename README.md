# c-plusplus_14-problem-solve-
Problem description
You are given a sequence of nn integers. Your task is to insert these elements into a queue. For another set of mm integers (queries), you must find how many times each queried number appears in the queue. If a queried number does not appear in the queue, you should print −1−1 for that query (this represents frequency 0).​
You have to implement two functions:​
insert(q, k): Insert element k into queue q.​
findFrequency(q, k): Return how many times k appears in queue q. If it does not appear, return −1−1.​
Example 1
Input:​
n=8n=8
Elements to insert into queue: 1 2 3 4 5 2 3 1
m=5m=5
Elements to find frequency: 1 3 2 9 10​
Output:​
text
2
2
2
-1
-1

Explanation:​
In the queue, 1 appears 2 times, 3 appears 2 times, and 2 appears 2 times, so outputs are 2 2 2.​
9 and 10 do not appear in the queue, so frequency is 0 and you print -1 for each.​
Example 2
Input:​
n=6n=6
Elements to insert: 1 2 1 1 1 4
m=4m=4
Elements to find frequency: 1 5 4 3​
Output:​
text
4
-1
1
-1

Explanation:​
In the queue, 1 appears 4 times and 4 appears 1 time, so outputs are 4 and 1.​
5 and 3 do not appear, so you print -1 for each.​