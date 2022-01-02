import java.util.*;
class A11
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        String s;
        s=sc.next();
        s=s.toUpperCase();
        int i,l,c=0;
        char ch1,ch2;
        l=s.length();
        for(i=0;i<l-1;i++)
        {
            ch1=s.charAt(i);
            ch2=s.charAt(i+1);
            if((ch1=='A'||ch1=='E'||ch1=='I'||ch1=='O'||ch1=='U')&&(ch2=='A'||ch2=='E'||ch2=='I'||ch2=='O'||ch2=='U'))
             ++c;
        }
        System.out.print("no.of vowels="+c);
        
    }
}