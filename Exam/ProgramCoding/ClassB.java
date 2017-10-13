class ClassB extends ClassA{
	
		static String name="Class B";
		
		ClassB(int n){
			super(n-1);
			System.out.print("ClassB created");	
		}
		
		public String toString(){
			return name + ": " + getM();	
		}
		
	
}