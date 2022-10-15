Algorithme checpoint
var 
     i,j,w: integer;//three counters
	 nbword,nbrvowels,lengstr : integer; // outputs
	 str : string; // input
begin
     read(str);
	 
/************   length of str ***********/
	 w:=0;
        REPEAT
		w++;
	 UNTIL ( str[w]=="." )	
		lengstr:=w;	
/****************************************/

/************   word number ***********/

      nbrword := 1; 
       for  j : = 1 to lengstr do // On parcours toute la chaîne...
        if str[j] =  ' '  then  nbrword++;		
        end if 
	   END_FOR  
/****************************************/

/************   vowels number ***********/

      nbrvowels :=  0; 
       for  i : = 1 to lengstr do // On parcours toute la chaîne...
        if str[i] in  ['a','e','y','u','i','o','A','E', 'I', 'O', 'U', 'Y']  then 
		nbrvowels++;		
        end if 
	   END_FOR  
/****************************************/
write (nbword,nbrvowels,lengstr );
END