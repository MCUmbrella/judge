import java.io.*;
public class BatchMkdir
{
	public static void main(String[] args)
	{
		for(int i=0; i<=Integer.parseInt(args[0]); i++)
		{
			File f = new File(String.valueOf(i));
			if(!f.exists()) f.mkdir();
		}
	}
}
