cmd_/home/pi/dd_exam/ques_1/Module.symvers := sed 's/ko$$/o/' /home/pi/dd_exam/ques_1/modules.order | scripts/mod/modpost -m -a   -o /home/pi/dd_exam/ques_1/Module.symvers -e -i Module.symvers   -T -
