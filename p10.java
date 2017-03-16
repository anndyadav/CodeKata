/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
 public static void runEratosthenesSieve(int upperBound) {
  int count = 0;

  int upperBoundSquareRoot = (int) Math.sqrt(upperBound);

  boolean[] isComposite = new boolean[upperBound + 1];

  for (int m = 2; m <= upperBoundSquareRoot; m++) {

   if (!isComposite[m]) {

    count++;

    for (int k = m * m; k <= upperBound; k += m)

     isComposite[k] = true;

   }

  }

  for (int m = upperBoundSquareRoot; m <= upperBound; m++)

   if (!isComposite[m])

    count++;

  System.out.println(count);

 }
 public static void main(String[] args) throws java.lang.Exception {
  int n;
  Scanner sc = new Scanner(System.in);
  n = sc.nextInt();
  if(n<2){
      System.out.println(0);
  }
  runEratosthenesSieve(n);
  sc.close();
 }
}
