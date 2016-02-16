# adyax-test
Task:

As we have previously discussed, I offer you to complete a technical test for us. You can find the detailed description below. It’s important that you inform me about the time when you have started working on the test and when you have finished it. 

 1) Using Field API create new field type that will save Vimeo video. User will copy/paste Video URL into this field in BO (back office) (e.g. http://vimeo.com/borisseewald/momentum or http://vimeo.com/67025679). It needs to be saved as a numeric video ID (every video has ID in Vimeo, 67025679 in prev example) in database and shown as a video thumbnail on front (fetched from Vimeo site) with a link to this video on Vimeo site.

 2) Create CTools content type for panels to show random 3 Vimeo videos created on the site.

Organize your code as a module named ‘adyax_test’. Add a feature (using Feature module) that if enabled will provide a page (panels page) with address /test that demonstrates the task results).
You should write your code respecting drupal standards and approaches.

The test is expected to be done with “Production ready” quality; therefore, the company will have a chance to evaluate you professional level better. 


3) Also, please, send us the example(s) of your Drupal code, examples of Drupal sites, that you have worked on, and describe the role you have performed while working on them.

I wish you good luck! If you have any questions, please, let me know 

Feedback:

1. I get full drupal distro, without it test doesn't work. 

2. We asked to show 3 nodes with vimeo fields, in Ctools we have select for 3 nodes of dedicated CT which i don't have on my test env so it fails. 

3. to get 3 random nodes all nodes from this CT loaded by node_laod_multiply and then 3 random is picked.

Status:

Failed