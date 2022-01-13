import java.util.*;
class A3

{
    public static void main()
    {
        Scanner sc =new Scanner(System.in);
        String s;
        s=sc.next();
        int i,l;
        char ch;
        l=s.length();
        for(i=0;i<l;i++)
        {
            ch=s.charAt(i);
            if(Character.isLowerCase(ch))
            System.out.print(Character.toUpperCase(ch));
            else if(Character.isUpperCase(ch))
            System.out.print(Character.toLowerCase(ch));
            else
            System.out.print(ch);
        }
    }
}