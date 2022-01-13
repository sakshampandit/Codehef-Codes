import java.util.*;
import java.io.*; 
class A7
{
    public static void main()
    {
        int i,l;
        String s;
        Scanner sc= new Scanner(System.in);
        s=sc.next();
        l=s.length();
        for(i=0;i<=l;i++)
        {
            System.out.println(s.substring(0,i));
        }
        for(i=l-1;i>=0;i--)
        {
            System.out.println(s.substring(0,i));
        }
    }
}
