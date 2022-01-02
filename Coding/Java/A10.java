import java.util.*;
class A10
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        String s;
        int i,l;
        char ch;
        s=sc.next();
        s=s.toLowerCase();
        l=s.length();
        for(i=0;i<l;i++)
        { ch=s.charAt(i);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            s=s.replace(ch,++ch);
            
        }
        System.out.print(s);
    }
}