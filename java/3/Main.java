public class Main
{
    static String genStar(int count)
    {
        String s="";
        for(int i=0; i!=count; i++)
            s+="* ";
        return s.trim();
    }
    
    static String genSpace(int count)
    {
        String s="";
        for(int i=0; i!=count; i++)
            s+=' ';
        return s;
    }

    public static void main(String[] args)
    {
        for(int i=4; i!=0; i--)
            System.out.println(genSpace(4-i)+genStar(i));
    }
}
