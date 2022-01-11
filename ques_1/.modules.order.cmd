cmd_/home/pi/dd_exam/ques_1/modules.order := {   echo /home/pi/dd_exam/ques_1/driver.ko; :; } | awk '!x[$$0]++' - > /home/pi/dd_exam/ques_1/modules.order
