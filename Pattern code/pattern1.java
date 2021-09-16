import java.util.*;
import java.lang.*;
import java.io.*;

// ...1...
// ..2.3..
// .4.5.6.
// 7.8.9.10

class Codechef
{
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        int n=scan.nextInt();
        int k=1;
        for(int i=0;i<n;i++) {
            for(int j=-n+1;j<n;j++) {
                if(i%2!=0 && j>=-i && j%2!=0 && j<=i)
                    System.out.print(k++);
                else if(i%2==0 && j>=-i && j%2==0 && j<=i)
                    System.out.print(k++);
                else
                    System.out.print(".");
            }
            System.out.println();
        }
    }
}
