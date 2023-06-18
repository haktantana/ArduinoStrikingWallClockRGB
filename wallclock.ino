void setup()
{
  
}

void loop()
{
  
  for(int i=1;i<13;i++){
  analogWrite(i, 255);
    switch(i){
      case 1: tone(13, 200 ,700);
      break;
    }
    
  for(int j=1;j<13;j++){
    if(i!=j){
    //digitalWrite(j, HIGH);
      switch(j) {
  			case 1:
        		analogWrite(j,255);
    			analogWrite(A1,255);
        delay(1000); digitalWrite(A1, LOW);
    		break;
  			case 2:
        		analogWrite(j,255);
    			analogWrite(A2,255);
        delay(1000); digitalWrite(A2, LOW);
    		break;
          	case 4:
       			 analogWrite(j,255);
    			analogWrite(A3,255);
        delay(1000); digitalWrite(A3, LOW);
    		break;
          	case 7:
        		analogWrite(j,255);
    			analogWrite(A4,255);
        delay(1000); digitalWrite(A4, LOW);
    		break;
          	case 8:
        		analogWrite(j,255);
    			analogWrite(A5,255);
        delay(1000); digitalWrite(A5, LOW);
    		break;
          	case 12:
        		analogWrite(j,255);
    			analogWrite(A0,255);
        delay(1000); digitalWrite(A0, LOW);
    		break;
        	case 3:
    			analogWrite(j,5);
        delay(1000); 
    		break;
        	case 5:
    			analogWrite(j,5);
        delay(1000); 
    		break;
        	case 6:
    			analogWrite(j,5);
        delay(1000); 
    		break;
        	case 9:
    			analogWrite(j,5);
        delay(1000); 
    		break;
        	case 10:
    			analogWrite(j,5);
        delay(1000); 
    		break;
        	case 11:
    			analogWrite(j,5);
        delay(1000); 
    		break;
			}
    digitalWrite(j, LOW);
    }
    if(i==j){
      delay(1000);
    }
  }
  digitalWrite(i, LOW);
}
  tone(13,261);
  noTone(13);
}
