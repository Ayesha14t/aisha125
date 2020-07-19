#include<stdio.h>

 void main(){

  float c,f;
 
    printf("Conversion Table of Fahrenheit to Celsius\n");
 
   for(float i=0;i<=100;i++){

     c=(i-32)*5/9;

     printf("%.2f .F \t %.2f degree \n",i,c);
   
    }
    
 }

/*aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/loop$ cc a3.c
aishatandekar@predatoraisha-VirtualBox:~/c2w-ayesha/pc/loop$ ./a.out
Conversion Table of Fahrenheit to Celsius
0.00 .F 	 -17.78 degree 
1.00 .F 	 -17.22 degree 
2.00 .F 	 -16.67 degree 
3.00 .F 	 -16.11 degree 
4.00 .F 	 -15.56 degree 
5.00 .F 	 -15.00 degree 
6.00 .F 	 -14.44 degree 
7.00 .F 	 -13.89 degree 
8.00 .F 	 -13.33 degree 
9.00 .F 	 -12.78 degree 
10.00 .F 	 -12.22 degree 
11.00 .F 	 -11.67 degree 
12.00 .F 	 -11.11 degree 
13.00 .F 	 -10.56 degree 
14.00 .F 	 -10.00 degree 
15.00 .F 	 -9.44 degree 
16.00 .F 	 -8.89 degree 
17.00 .F 	 -8.33 degree 
18.00 .F 	 -7.78 degree 
19.00 .F 	 -7.22 degree 
20.00 .F 	 -6.67 degree 
21.00 .F 	 -6.11 degree 
22.00 .F 	 -5.56 degree 
23.00 .F 	 -5.00 degree 
24.00 .F 	 -4.44 degree 
25.00 .F 	 -3.89 degree 
26.00 .F 	 -3.33 degree 
27.00 .F 	 -2.78 degree 
28.00 .F 	 -2.22 degree 
29.00 .F 	 -1.67 degree 
30.00 .F 	 -1.11 degree 
31.00 .F 	 -0.56 degree 
32.00 .F 	 0.00 degree 
33.00 .F 	 0.56 degree 
34.00 .F 	 1.11 degree 
35.00 .F 	 1.67 degree 
36.00 .F 	 2.22 degree 
37.00 .F 	 2.78 degree 
38.00 .F 	 3.33 degree 
39.00 .F 	 3.89 degree 
40.00 .F 	 4.44 degree 
41.00 .F 	 5.00 degree 
42.00 .F 	 5.56 degree 
43.00 .F 	 6.11 degree 
44.00 .F 	 6.67 degree 
45.00 .F 	 7.22 degree 
46.00 .F 	 7.78 degree 
47.00 .F 	 8.33 degree 
48.00 .F 	 8.89 degree 
49.00 .F 	 9.44 degree 
50.00 .F 	 10.00 degree 
51.00 .F 	 10.56 degree 
52.00 .F 	 11.11 degree 
53.00 .F 	 11.67 degree 
54.00 .F 	 12.22 degree 
55.00 .F 	 12.78 degree 
56.00 .F 	 13.33 degree 
57.00 .F 	 13.89 degree 
58.00 .F 	 14.44 degree 
59.00 .F 	 15.00 degree 
60.00 .F 	 15.56 degree 
61.00 .F 	 16.11 degree 
62.00 .F 	 16.67 degree 
63.00 .F 	 17.22 degree 
64.00 .F 	 17.78 degree 
65.00 .F 	 18.33 degree 
66.00 .F 	 18.89 degree 
67.00 .F 	 19.44 degree 
68.00 .F 	 20.00 degree 
69.00 .F 	 20.56 degree 
70.00 .F 	 21.11 degree 
71.00 .F 	 21.67 degree 
72.00 .F 	 22.22 degree 
73.00 .F 	 22.78 degree 
74.00 .F 	 23.33 degree 
75.00 .F 	 23.89 degree 
76.00 .F 	 24.44 degree 
77.00 .F 	 25.00 degree 
78.00 .F 	 25.56 degree 
79.00 .F 	 26.11 degree 
80.00 .F 	 26.67 degree 
81.00 .F 	 27.22 degree 
82.00 .F 	 27.78 degree 
83.00 .F 	 28.33 degree 
84.00 .F 	 28.89 degree 
85.00 .F 	 29.44 degree 
86.00 .F 	 30.00 degree 
87.00 .F 	 30.56 degree 
88.00 .F 	 31.11 degree 
89.00 .F 	 31.67 degree 
90.00 .F 	 32.22 degree 
91.00 .F 	 32.78 degree 
92.00 .F 	 33.33 degree 
93.00 .F 	 33.89 degree 
94.00 .F 	 34.44 degree 
95.00 .F 	 35.00 degree 
96.00 .F 	 35.56 degree 
97.00 .F 	 36.11 degree 
98.00 .F 	 36.67 degree 
99.00 .F 	 37.22 degree 
100.00 .F 	 37.78 degree */

