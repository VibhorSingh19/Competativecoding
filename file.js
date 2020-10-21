const fs=require('fs');
fs.readFile('./hello.txt',(err,data)=>{
    console.time("Fun");
	if(err){
		console.log("errorrrrrrr");
	}
	else
	{
		var dataa=data.toString('utf8');
		var sum=0;
		for(var i=0;i<=dataa.length;i++)
		{
			if(dataa.charAt(i)==='(')
			{
				sum=sum+1;
			}
			else if(dataa.charAt(i)===')')
			{
				sum=sum-1;
			}
            if(sum===-1)
            {
            	console.log(i+1);
            	break;
            }
		}

		console.timeEnd("Fun");
	}

})
