import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void main(String[] args)
    {
	    Scanner scan=new Scanner(System.in);
	    int n=scan.nextInt();	 
        int k=n*2+1;
	    for(int i=1;i<=k;i++) {
	        for(int j=1;j<=k;j++) {
	            if(j==i || j==k-i+1)
                    System.out.print("*");
                else 
                    System.out.print(".");
            }
	        System.out.println();
       }
    }
}