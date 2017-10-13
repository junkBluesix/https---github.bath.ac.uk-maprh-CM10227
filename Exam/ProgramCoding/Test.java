public class Test{
	
	public static void main(String[] args){
		
		ClassA[] cbs = new ClassA[9];
		int i=0;
		
		while(i<2)
			cbs[i++]=new ClassA();
		while(i<6)
			cbs[i]=new ClassB(i++%2+6);
		for(int k=0; k<cbs.length/2+1; k++){
			System.out.println(""+cbs[k]);
		}
	}
}