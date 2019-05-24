<?php


if(!empty($_GET['state2'])&&is_numeric($_GET['state2'])){
	$file=fopen("data4","a");
	fwrite($file,$_GET['state2']."\n");
	fclose($file);
	echo "success";}

else
    echo "failure";


	$file=fopen("data4","r") or die("Unable to open file");
	$data=fread($file,filesize("data4"));
	$array=explode("\n",$data);
	foreach ($array as $i) {
		# code...
		echo "The input is ".$i;
		echo "<br>";
	}

?>
