import java.util.*;
import java.io.*;
class A5
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        String s;
        s=sc.next();
        s=s.trim();
        int i,l;
        char ch;
        String rev="";
        l=s.length();
        for(i=l-1;i>=0;i--)
        { ch=s.charAt(i);
            rev=rev+ch;
            
        }
        if(s.equalsIgnoreCase(rev))
        System.out.print("Palindrome String");
        else 
        System.out.print("Not a Palindrome String");
    }
}
        