import java.io.*;
public class BatchMkdir
{
    public static void main(String[] args)
    {
        for(int i=0; i<=139; i++)
            new File(String.valueOf(i)).mkdir();
    }
}
