class A2
{
    public static void main()
    {   String s="Neelam";
        int c1=0,c2=0,c3=0,c4=0;
        char ch;
        int i,l;
        s=s.trim();
        l=s.length();
        for(i=0;i<l;i++)
        {
            ch=s.charAt(i);
            if(Character.isLetter(ch))
            ++c1;
            if(Character.isDigit(ch))
            ++c2;
            if(Character.isLetterOrDigit(ch)==false)
            ++c3;
            if(ch==' ')
            ++c4;
        }
        System.out.print("\nNo. of Letters are\n"+c1);
        System.out.println("\nNo. of Digits are\n"+c2);
        System.out.println("\nNo. of Special Characters\n "+c3);
        System.out.println("\nNo. of Words\n"+c4);
    }
    
}