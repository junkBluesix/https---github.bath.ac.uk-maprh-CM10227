public class ClassA{

	static String name="Class A";
	int number = 1;
	String m[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul"};
	
	ClassA(int number){
		this.number=number;
		System.out.println("ClassA created");	
	}
	
	ClassA(){
		System.out.println("created ClassA");
	}
	
		
	public String getM(){
		return m[number];	
	}	
	
	public String toString(){
		return name + ": " + getM();	
	}

}	