
public class Heartbeat {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int time = 0; 
		while(time < 15000) {
			try {
				Thread.sleep(1000);
				System.out.println(time/1000 + " sec have elapsed");
				
			} catch(InterruptedException e) {
				e.printStackTrace();
			}
		}
		

	}

}
