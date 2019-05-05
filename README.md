<b>Overview:</b><br><br>
This repository contains programs to calculate the sum of the even fibonacci numbers in the first 
n terms of the series. It is done in two ways: iterative version and O(1) version. Please look below
on how to run the programs and the logic behind them.

<b>Running the program:</b>
1. Go the directory containing the makefile and run the command 'make'.
2. Run ./fibonacci to run the iterative version
3. Run ./fibonacci_advanced to run the O(1) version

<b>Calculate the sum of the even fibonacci numbers in the first n terms of the series:</b><br><br>
Observe that every third fibonacci number is even.
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233 ,… 

So try to write Fn in terms of Fn-3 and Fn-6 <br>
Fn = Fn-1 + Fn-2 <br>
   = Fn-2 + Fn-3 + Fn-3 + Fn-4 <br>
   = Fn-2 + 2Fn-3 + Fn-4 <br>
   = Fn-3 + Fn-4 + 2Fn-3 + Fn-4 <br>
   = 3Fn-3 + 2Fn-4 <br>
   = 4Fn-3 + Fn-6  <br>
   
Calculate the appropriate number of even numbers and use the above formula to sum them up.

<b>Calculate the sum of the even fibonacci numbers in the first n terms of the series in O(1):</b>

Again using the fact that every third number is even, the sum of even fibonacci numbers can be written as sum of <br>
((phi)<sup>3i</sup> - (psi)<sup>3i</sup>)/5<sup>1/2</sup> <br>
where 'i' is the number of even fibonacci numbers for which we want to find the sum.<br>
phi is (1+5<sup>1/2</sup>)/2 and psi = phi<sup>-1</sup>
<br>Solving the above gives (1 / sqrt(5)) * (
        phi<sup>3</sup> * ((1 - phi<sup>3k</sup>) / (1 - phi<sup>3</sup>)) -
        psi<sup>3</sup> * ((1 - psi<sup>3k</sup>) / (1 - psi<sup>3</sup>)))<br>
where k is floor(n/3)
