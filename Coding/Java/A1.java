import java.util.*;
class A1
{
    public static void main()
    {
        String s;
        Scanner sc=new Scanner(System.in);
        s=sc.next();
        int c1=0,c2=0,c3=0;
        char ch;
        int i,l;
        l=s.length();
        for(i=0;i<l;i++)
        {
           ch=s.charAt(i);
           if(Character.isUpperCase(ch))
           ++c1;
           if(Character.isLowerCase(ch))
           ++c2;
           if(Character.isDigit(ch))
           ++c3;
           
        }
        System.out.println("No. of Uppercase Letters="+c1);
        System.out.println("No. of Lowercase Letters="+c2);
        System.out.println("No. of Digits="+c3);
        
    }
}