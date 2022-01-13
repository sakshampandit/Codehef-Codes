import java.util.*;
class A8
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        String s;
        char ch,a;
        s=sc.next();
        int i,l;
        l=s.length();
        for(a='A';a<='Z';a++)
        {
            for(i=0;i<l;i++)
            {
               ch=s.charAt(i);
               if(ch==a)
               System.out.print(a);
               
            }
        }
    }
}