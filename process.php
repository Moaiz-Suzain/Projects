<?php ob_start();



	if(isset($_POST['submit'])) {
		
	$to = "moaizsuzain@gmail.com";
	$subject = $_POST['subject'];
	$email = $_POST['email'];
	$txt = $_POST['message'];
	$headers = "From: " .$email . "\r\n" ;
	"CC: fazlehassan76@gmail.com";
	
	mail($to,$subject,$txt,$headers);
	
	header("Location: contact.html");
	
    
		
	
	}




?>
