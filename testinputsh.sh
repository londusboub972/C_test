git commit -a
while true; do
    read -p "Do you want to push it now ?" yn
    case $yn in
        [Yy]* ) git push origin master && exit;;
        [Nn]* ) echo "All done think to push it bro! " && exit;;
        * ) echo "Answers Yy or Nn";;
    esac
done
