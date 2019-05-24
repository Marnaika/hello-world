<?php 



if(!empty($_GET['state'])&&empty($_GET['read'])&&((($_GET['state'])==1)||($_GET['state']==2)||($_GET['state']==3))){
	$file=fopen("data_final_1","w");
	fwrite($file,$_GET['state']);
	fclose($file);
	header('Location:final.html'); 	
}

else if(!empty($_GET['read'])&&empty($_GET['state'])&&($_GET['read']))
{	$file=fopen("data_final_1","r");
	$data=fread($file,filesize("data_final_1"));
	fclose($file);
	if ($data=="1"||$data=="2"||$data=="3") 
		echo $data;
	else
		echo "error";
		# code...
}

	
	$file2=fopen("data3","a");
	fwrite($file2,$_GET['state2']."\n");
	fclose($file2);

	$file2=fopen("data3","r") or die("Unable to open file");
	$data2=fread($file2,filesize("data3"));
	$array=explode("\n",$data2);
	foreach ($array as $i) {
		# code...
		echo "The input is ".$i;
	}

 ?>