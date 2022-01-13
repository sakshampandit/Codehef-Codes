import java.io.*;
import java.util.*;
class A4
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        String s;
        s=sc.next();
        int i,l;
        String rev="";
        char ch;
        l=s.length();
        for(i=l-1;i>=0;i--)
        {
            ch=s.charAt(i);
            rev=rev+ch;
            
        }
        System.out.print("Reverse String ="+rev);
    }
}