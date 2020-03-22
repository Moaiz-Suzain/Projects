<?php ob_start();



	if(!empty($_POST['submit'])) {
	$name = $_POST["name"];	
	$to = "moaizsuzain@gmail.com";
	$subject = $_POST['subject'];
	$email = $_POST['email'];
	$txt = $_POST['message'];
	$headers = "From: " . $name . "<". $email . ">\r\n":
	
	if(mail($to,$subject,$txt,$headers)) {
		$message = "Your message has been sent.";
		$type = "success";
	}
	
	header("Location: contact.html");
	
    
		
	
	}




?>
