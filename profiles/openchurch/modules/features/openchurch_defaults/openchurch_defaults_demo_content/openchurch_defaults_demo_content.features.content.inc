<?php
/**
 * @file
 * openchurch_defaults_demo_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function openchurch_defaults_demo_content_content_defaults() {
  $content = array();

  $content['oc_page_about'] = (object) array(
    'exported_path' => 'about',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/oc_page_about',
      'router_path' => 'node/%',
      'link_title' => 'About',
      'options' => array(),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '1',
      'expanded' => '0',
      'weight' => '-44',
      'identifier' => 'main-menu:node-name/oc_page_about',
    ),
    'title' => 'About Open Church',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1323219277',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'oc_page_about',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum congue consectetur purus sit amet blandit. Suspendisse id libero varius justo pharetra ullamcorper. Proin interdum scelerisque tortor sit amet pulvinar. Ut gravida, justo quis rhoncus pharetra, ante est accumsan augue, sed ultrices velit orci vitae velit. Aliquam faucibus placerat mollis. Donec rhoncus leo ac ante sollicitudin scelerisque. Aenean tortor mi, feugiat id ultricies sed, iaculis id tellus. Donec rhoncus ligula velit, id mattis magna. Aenean vel consequat orci. Fusce lectus nisi, dictum vel hendrerit in, tincidunt ac eros. Vestibulum sed elit risus, id scelerisque urna. Sed vestibulum, felis nec porta scelerisque, nibh metus egestas nunc, eget commodo orci risus non dolor. Maecenas auctor vulputate enim ut fermentum.
          
          Aenean sit amet nulla ante. Nulla lobortis luctus nisi, vestibulum pulvinar libero varius sit amet. Sed vehicula mauris vel elit facilisis cursus. Pellentesque pulvinar urna leo. Aenean sed enim vel dolor egestas ornare in vel erat. Phasellus iaculis sodales nisl, non mattis est fermentum ac. Integer rhoncus tortor rhoncus purus egestas posuere. Mauris sed ante quam, non adipiscing erat. Quisque interdum sollicitudin hendrerit. In purus purus, aliquet in ultrices at, viverra non augue. Quisque porta imperdiet tellus id tempus. Suspendisse ac malesuada dolor. Praesent tempus lorem porttitor tortor ultrices fringilla faucibus turpis molestie. Phasellus blandit tincidunt mi vel pretium. Quisque vel nunc nec dolor blandit sodales id elementum risus. Sed sed odio purus, non cursus velit.',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum congue consectetur purus sit amet blandit. Suspendisse id libero varius justo pharetra ullamcorper. Proin interdum scelerisque tortor sit amet pulvinar. Ut gravida, justo quis rhoncus pharetra, ante est accumsan augue, sed ultrices velit orci vitae velit. Aliquam faucibus placerat mollis. Donec rhoncus leo ac ante sollicitudin scelerisque. Aenean tortor mi, feugiat id ultricies sed, iaculis id tellus. Donec rhoncus ligula velit, id mattis magna. Aenean vel consequat orci. Fusce lectus nisi, dictum vel hendrerit in, tincidunt ac eros. Vestibulum sed elit risus, id scelerisque urna. Sed vestibulum, felis nec porta scelerisque, nibh metus egestas nunc, eget commodo orci risus non dolor. Maecenas auctor vulputate enim ut fermentum.</p>
  <p>        Aenean sit amet nulla ante. Nulla lobortis luctus nisi, vestibulum pulvinar libero varius sit amet. Sed vehicula mauris vel elit facilisis cursus. Pellentesque pulvinar urna leo. Aenean sed enim vel dolor egestas ornare in vel erat. Phasellus iaculis sodales nisl, non mattis est fermentum ac. Integer rhoncus tortor rhoncus purus egestas posuere. Mauris sed ante quam, non adipiscing erat. Quisque interdum sollicitudin hendrerit. In purus purus, aliquet in ultrices at, viverra non augue. Quisque porta imperdiet tellus id tempus. Suspendisse ac malesuada dolor. Praesent tempus lorem porttitor tortor ultrices fringilla faucibus turpis molestie. Phasellus blandit tincidunt mi vel pretium. Quisque vel nunc nec dolor blandit sodales id elementum risus. Sed sed odio purus, non cursus velit.</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['oc_page_image_acknowledgements'] = (object) array(
    'exported_path' => 'image-acknowledgements',
    'title' => 'Image Acknowledgements',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1323218955',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'oc_page_image_acknowledgements',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Thank you wonderful internet for allowing me to find and share these images:</p>
          <table style="width: 90%;">
          <tbody style="border: 0;">
          <tr>
          <td>
          <p style="text-align: center;"><a title="A Lesson in Generosity" href="http://www.flickr.com/photos/micahe/2744567495/in/photostream/"><img src="/profiles/openchurch/images/acknowledge-thumbs/a-lesson-in-generosity.jpg" alt="A Lesson in Generosity" /></a></p>
          <p style="text-align: center;"><a title="A Lesson in Generosity" href="http://www.flickr.com/photos/micahe/2744567495/in/photostream/">A lesson in generosity</a></p>
          </td>
          <td>
          <p style="text-align: center;"><a title="Moments to Remember" href="http://www.flickr.com/photos/alessandracurti/1751665270/"><img src="/profiles/openchurch/images/acknowledge-thumbs/moments-to-remember.jpg" alt="Moments to Remember" width="150" height="100" /></a></p>
          <p style="text-align: center;"><a title="Moments to Remember" href="http://www.flickr.com/photos/alessandracurti/1751665270/">Moments to Remember</a></p>
          </td>
          <td>
          <p style="text-align: center;"><a title="Our future North" href="http://www.flickr.com/photos/smb_flickr/528713203/"><img src="/profiles/openchurch/images/acknowledge-thumbs/our-future-north.jpg" alt="Our future North" width="150" height="100" /></a></p>
          <p style="text-align: center;"><a title="Our future North" href="http://www.flickr.com/photos/smb_flickr/528713203/">Our future North</a></p>
          </td>
          </tr>
          <tr>
          <td>
          <p style="text-align: center;"><a title="Untitled" href="http://www.flickr.com/photos/mcmartin/4118484997/"><img src="/profiles/openchurch/images/acknowledge-thumbs/untitled.jpg" alt="Untitled" width="150" height="100" /></a></p>
          <p style="text-align: center;"><a title="Untitled" href="http://www.flickr.com/photos/mcmartin/4118484997/">Untitled</a></p>
          </td>
          <td>
          <p style="text-align: center;"><a title="YIP: 07.16.09" href="http://www.flickr.com/photos/winemegup/3727132539/"><img src="/profiles/openchurch/images/acknowledge-thumbs/yip.jpg" alt="YIP: 07.16.09" width="150" height="100" /></a></p>
          <p style="text-align: center;"><a title="YIP: 07.16.09" href="http://www.flickr.com/photos/winemegup/3727132539/">YIP: 07.16.09</a></p>
          </td>
          </tr>
          </tbody>
          </table>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p>Thank you wonderful internet for allowing me to find and share these images:</p>
  <table style="width: 90%;"><tbody style="border: 0;"><tr><td>
  <p style="text-align: center;"><a title="A Lesson in Generosity" href="http://www.flickr.com/photos/micahe/2744567495/in/photostream/"><img src="/profiles/openchurch/images/acknowledge-thumbs/a-lesson-in-generosity.jpg" alt="A Lesson in Generosity" /></a></p>
  <p style="text-align: center;"><a title="A Lesson in Generosity" href="http://www.flickr.com/photos/micahe/2744567495/in/photostream/">A lesson in generosity</a></p>
  </td>
  <td>
  <p style="text-align: center;"><a title="Moments to Remember" href="http://www.flickr.com/photos/alessandracurti/1751665270/"><img src="/profiles/openchurch/images/acknowledge-thumbs/moments-to-remember.jpg" alt="Moments to Remember" width="150" height="100" /></a></p>
  <p style="text-align: center;"><a title="Moments to Remember" href="http://www.flickr.com/photos/alessandracurti/1751665270/">Moments to Remember</a></p>
  </td>
  <td>
  <p style="text-align: center;"><a title="Our future North" href="http://www.flickr.com/photos/smb_flickr/528713203/"><img src="/profiles/openchurch/images/acknowledge-thumbs/our-future-north.jpg" alt="Our future North" width="150" height="100" /></a></p>
  <p style="text-align: center;"><a title="Our future North" href="http://www.flickr.com/photos/smb_flickr/528713203/">Our future North</a></p>
  </td>
  </tr><tr><td>
  <p style="text-align: center;"><a title="Untitled" href="http://www.flickr.com/photos/mcmartin/4118484997/"><img src="/profiles/openchurch/images/acknowledge-thumbs/untitled.jpg" alt="Untitled" width="150" height="100" /></a></p>
  <p style="text-align: center;"><a title="Untitled" href="http://www.flickr.com/photos/mcmartin/4118484997/">Untitled</a></p>
  </td>
  <td>
  <p style="text-align: center;"><a title="YIP: 07.16.09" href="http://www.flickr.com/photos/winemegup/3727132539/"><img src="/profiles/openchurch/images/acknowledge-thumbs/yip.jpg" alt="YIP: 07.16.09" width="150" height="100" /></a></p>
  <p style="text-align: center;"><a title="YIP: 07.16.09" href="http://www.flickr.com/photos/winemegup/3727132539/">YIP: 07.16.09</a></p>
  </td>
  </tr></tbody></table>',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['oc_page_map_directions'] = (object) array(
    'exported_path' => 'about/map-and-directions',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/oc_page_map_directions',
      'router_path' => 'node/%',
      'link_title' => 'Map and Directions',
      'options' => array(),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '0',
      'parent_path' => 'node-name/oc_page_about',
      'identifier' => 'main-menu:node-name/oc_page_map_directions',
    ),
    'title' => 'Map and Directions',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1323219295',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'oc_page_map_directions',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<h3>Come Visit Us at OpenChurch!</h3>
          <p>Come find us just three right turns past the downtown circle then left into the big open parking lot. &nbsp;Look for the brick building and come on in!</p>
          <p>If you want to share a map you could embed a custom map from google, mapquest, or bing. &nbsp;Whatever you decide just be sure to consider those who may come from any direction and might need different instructions. &nbsp;</p>
          <p>
          <iframe width="100%" height="350" frameborder="0" scrolling="no" marginheight="0" marginwidth="0" src="http://www.google.com/maps?f=d&amp;source=embed&amp;saddr=&amp;daddr=Church+Street,+Nashville,+TN&amp;hl=en&amp;geocode=&amp;mra=ls&amp;sll=37.0625,-95.677068&amp;sspn=38.365962,79.013672&amp;ie=UTF8&amp;ll=37.020098,-95.625&amp;spn=47.972233,96.679688&amp;t=m&amp;vpsrc=0&amp;iwloc=ddw1&amp;output=embed"></iframe><br /><small><a href="http://www.google.com/maps?f=d&amp;source=embed&amp;saddr=&amp;daddr=Church+Street,+Nashville,+TN&amp;hl=en&amp;geocode=&amp;mra=ls&amp;sll=37.0625,-95.677068&amp;sspn=38.365962,79.013672&amp;ie=UTF8&amp;ll=37.020098,-95.625&amp;spn=47.972233,96.679688&amp;t=m&amp;vpsrc=0&amp;iwloc=ddw1" style="color:#0000FF;text-align:left">View Larger Map</a></small>
          </p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<h3>Come Visit Us at OpenChurch!</h3>
  <p>Come find us just three right turns past the downtown circle then left into the big open parking lot.  Look for the brick building and come on in!</p>
  <p>If you want to share a map you could embed a custom map from google, mapquest, or bing.  Whatever you decide just be sure to consider those who may come from any direction and might need different instructions.  </p>
  <p><iframe width="550" height="350" frameborder="0" scrolling="no" marginheight="0" marginwidth="0" src="http://www.google.com/maps?f=d&amp;source=embed&amp;saddr=&amp;daddr=Church+Street,+Nashville,+TN&amp;hl=en&amp;geocode=&amp;mra=ls&amp;sll=37.0625,-95.677068&amp;sspn=38.365962,79.013672&amp;ie=UTF8&amp;ll=37.020098,-95.625&amp;spn=47.972233,96.679688&amp;t=m&amp;vpsrc=0&amp;iwloc=ddw1&amp;output=embed"></iframe></p><p><small><a href="http://www.google.com/maps?f=d&amp;source=embed&amp;saddr=&amp;daddr=Church+Street,+Nashville,+TN&amp;hl=en&amp;geocode=&amp;mra=ls&amp;sll=37.0625,-95.677068&amp;sspn=38.365962,79.013672&amp;ie=UTF8&amp;ll=37.020098,-95.625&amp;spn=47.972233,96.679688&amp;t=m&amp;vpsrc=0&amp;iwloc=ddw1" style="color:#0000FF;text-align:left">View Larger Map</a></small>
          </p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['oc_page_serve'] = (object) array(
    'exported_path' => 'serve',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/oc_page_serve',
      'router_path' => 'node/%',
      'link_title' => 'Serve',
      'options' => array(
        'attributes' => array(),
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '-47',
      'identifier' => 'main-menu:node-name/oc_page_serve',
    ),
    'title' => 'Serve',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1323490498',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'oc_page_serve',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<h3>Lorem ipsum dolor sit amet, consectetur adipiscing elit</h3>
          <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna. Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo. In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.</p>
          <p>Fusce ac elit diam, lobortis semper magna. Duis pulvinar, purus eu porttitor interdum, sem tortor molestie justo, sed porttitor tortor ligula in quam. Fusce non convallis lectus. Aenean eleifend quam quis metus hendrerit ut pellentesque sem ultrices. Aliquam neque velit, ultricies vitae dignissim nec, feugiat sed augue. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec mattis nibh ullamcorper turpis aliquet sed blandit lacus dictum. Morbi at lectus erat. Aliquam erat volutpat. Praesent ut enim aliquet odio venenatis vulputate. Mauris pellentesque mollis luctus. Vestibulum tempor diam ac sem fringilla varius.</p>
          <p>Donec ac est massa. Etiam cursus, justo sed bibendum tincidunt, diam leo faucibus est, sed egestas justo nisi sed tellus. Donec vitae tellus velit, ac pellentesque sem. Suspendisse vehicula ultricies augue, at lacinia orci ultrices vel. Nam fringilla eros ac odio pellentesque et convallis tortor cursus. Vivamus vel eros in dui mattis sollicitudin. Curabitur gravida porta justo, in dignissim tortor mattis venenatis. Aenean sit amet purus urna. Integer elementum eleifend justo, sed suscipit urna molestie eu. Suspendisse iaculis sagittis convallis. Maecenas dapibus arcu purus, vitae ultrices odio. Donec interdum tincidunt libero, commodo vehicula dolor pharetra quis. Cras ullamcorper ultrices lectus, a gravida erat commodo adipiscing. Donec nec blandit tortor. In congue dignissim erat eu aliquam.</p>
          <p>Suspendisse convallis pulvinar tincidunt. Cras adipiscing, magna quis auctor tincidunt, tortor dolor adipiscing diam, nec pellentesque nisi ligula eu nunc. Nunc id vestibulum urna. Nam eu nibh nisi, ut ullamcorper nulla. Nam sit amet purus vel nisi pretium interdum vitae quis neque. Integer id tellus sit amet elit rutrum ultrices. Aliquam metus magna, ullamcorper et faucibus ac, mollis non turpis. Nam iaculis diam sit amet metus porttitor id eleifend mauris sagittis. Duis neque orci, eleifend sit amet consequat at, scelerisque at eros. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean aliquam porta augue ac placerat. Aenean a varius neque. Sed hendrerit rhoncus volutpat. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Maecenas nec velit eget enim molestie ullamcorper. Cras sollicitudin fermentum risus ut eleifend. Nulla commodo hendrerit enim, ac lacinia ligula volutpat quis. Nam vel tortor a purus iaculis auctor. Morbi ac nisl non enim cursus fringilla.</p>
          <p>Ut tempus facilisis augue vitae sodales. Nunc bibendum ullamcorper elit, luctus tincidunt neque feugiat at. Integer in ipsum a massa suscipit luctus vel ut nunc. Aliquam id pulvinar orci. Pellentesque id odio nulla. Duis sed convallis lorem. Nam orci turpis, vulputate sed faucibus vitae, congue quis erat. Proin luctus turpis nec est malesuada rhoncus. Fusce a felis ut metus pharetra consequat id non justo. Aliquam aliquet erat at mi vestibulum feugiat fringilla odio facilisis.</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<h3>Lorem ipsum dolor sit amet, consectetur adipiscing elit</h3>
  <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut facilisis dictum ligula ac dapibus. Nulla dictum varius quam, id rutrum lorem malesuada a. Morbi et velit urna. Morbi vestibulum dui ac ipsum pretium commodo. Donec tristique accumsan iaculis. Nam risus est, gravida ut tempor ut, dapibus sed justo. In hac habitasse platea dictumst. Etiam viverra nisi ut eros dictum ut blandit purus pretium. Phasellus faucibus aliquet auctor. Cras posuere lacus bibendum felis adipiscing quis consectetur turpis egestas. Nam mauris enim, rhoncus non gravida eget, lobortis sed ipsum. Ut orci felis, semper sed molestie vitae, sollicitudin id ipsum. Ut in nibh tellus, eu placerat leo.</p>
  <p>Fusce ac elit diam, lobortis semper magna. Duis pulvinar, purus eu porttitor interdum, sem tortor molestie justo, sed porttitor tortor ligula in quam. Fusce non convallis lectus. Aenean eleifend quam quis metus hendrerit ut pellentesque sem ultrices. Aliquam neque velit, ultricies vitae dignissim nec, feugiat sed augue. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec mattis nibh ullamcorper turpis aliquet sed blandit lacus dictum. Morbi at lectus erat. Aliquam erat volutpat. Praesent ut enim aliquet odio venenatis vulputate. Mauris pellentesque mollis luctus. Vestibulum tempor diam ac sem fringilla varius.</p>
  <p>Donec ac est massa. Etiam cursus, justo sed bibendum tincidunt, diam leo faucibus est, sed egestas justo nisi sed tellus. Donec vitae tellus velit, ac pellentesque sem. Suspendisse vehicula ultricies augue, at lacinia orci ultrices vel. Nam fringilla eros ac odio pellentesque et convallis tortor cursus. Vivamus vel eros in dui mattis sollicitudin. Curabitur gravida porta justo, in dignissim tortor mattis venenatis. Aenean sit amet purus urna. Integer elementum eleifend justo, sed suscipit urna molestie eu. Suspendisse iaculis sagittis convallis. Maecenas dapibus arcu purus, vitae ultrices odio. Donec interdum tincidunt libero, commodo vehicula dolor pharetra quis. Cras ullamcorper ultrices lectus, a gravida erat commodo adipiscing. Donec nec blandit tortor. In congue dignissim erat eu aliquam.</p>
  <p>Suspendisse convallis pulvinar tincidunt. Cras adipiscing, magna quis auctor tincidunt, tortor dolor adipiscing diam, nec pellentesque nisi ligula eu nunc. Nunc id vestibulum urna. Nam eu nibh nisi, ut ullamcorper nulla. Nam sit amet purus vel nisi pretium interdum vitae quis neque. Integer id tellus sit amet elit rutrum ultrices. Aliquam metus magna, ullamcorper et faucibus ac, mollis non turpis. Nam iaculis diam sit amet metus porttitor id eleifend mauris sagittis. Duis neque orci, eleifend sit amet consequat at, scelerisque at eros. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean aliquam porta augue ac placerat. Aenean a varius neque. Sed hendrerit rhoncus volutpat. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Maecenas nec velit eget enim molestie ullamcorper. Cras sollicitudin fermentum risus ut eleifend. Nulla commodo hendrerit enim, ac lacinia ligula volutpat quis. Nam vel tortor a purus iaculis auctor. Morbi ac nisl non enim cursus fringilla.</p>
  <p>Ut tempus facilisis augue vitae sodales. Nunc bibendum ullamcorper elit, luctus tincidunt neque feugiat at. Integer in ipsum a massa suscipit luctus vel ut nunc. Aliquam id pulvinar orci. Pellentesque id odio nulla. Duis sed convallis lorem. Nam orci turpis, vulputate sed faucibus vitae, congue quis erat. Proin luctus turpis nec est malesuada rhoncus. Fusce a felis ut metus pharetra consequat id non justo. Aliquam aliquet erat at mi vestibulum feugiat fringilla odio facilisis.</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['oc_page_times'] = (object) array(
    'exported_path' => 'about/time-locations',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/oc_page_times',
      'router_path' => 'node/%',
      'link_title' => 'Time & Locations',
      'options' => array(),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '0',
      'parent_path' => 'node-name/oc_page_about',
      'identifier' => 'main-menu:node-name/oc_page_times',
    ),
    'title' => 'Time & Locations',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1323219683',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'oc_page_times',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<h3>SUNDAY MORNING BIBLE CLASSES &amp; SERVICE</h3>
          <p>A wide variety of classes meet each week to welcome and nurture adults in their faith journey. &nbsp;Classes differ in size, format, and focus. &nbsp;Offerings may include textual, topical, ministry specific, or special needs studies. &nbsp;Some are age-specific while others are inter-generational. Many are on-ongoing throughout the year while special series are also provided.</p>
          <p>&nbsp;</p>
          <h3>WEEK AND EVENING BIBLE CLASSES &amp; SERVICE</h3>
          <p>Daytime and evening classes meet for study and discussion throughout the year. &nbsp;A wide variety of opportunities are available for men and women as well as general adult groups. &nbsp;Wednesday evenings offer several choices including "Peak of the Week," short term presentations that inspire and inform.</p>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<h3>SUNDAY MORNING BIBLE CLASSES &amp; SERVICE</h3>
  <p>A wide variety of classes meet each week to welcome and nurture adults in their faith journey.  Classes differ in size, format, and focus.  Offerings may include textual, topical, ministry specific, or special needs studies.  Some are age-specific while others are inter-generational. Many are on-ongoing throughout the year while special series are also provided.</p>
  <p> </p>
  <h3>WEEK AND EVENING BIBLE CLASSES &amp; SERVICE</h3>
  <p>Daytime and evening classes meet for study and discussion throughout the year.  A wide variety of opportunities are available for men and women as well as general adult groups.  Wednesday evenings offer several choices including "Peak of the Week," short term presentations that inspire and inform.</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['oc_webform'] = (object) array(
    'exported_path' => 'contact',
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => NULL,
      'redirect_url' => '<confirmation>',
      'status' => '1',
      'block' => '0',
      'teaser' => '0',
      'allow_draft' => '0',
      'auto_save' => '0',
      'submit_notice' => '1',
      'submit_text' => '',
      'submit_limit' => '-1',
      'submit_interval' => '-1',
      'total_submit_limit' => '-1',
      'total_submit_interval' => '-1',
      'record_exists' => TRUE,
      'roles' => array(
        0 => '1',
        1 => '2',
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
          'pid' => '0',
          'form_key' => 'first_name',
          'name' => 'First Name',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'width' => '25',
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '0',
          'page_num' => 1,
        ),
        1 => array(
          'pid' => '0',
          'form_key' => 'last_name',
          'name' => 'Last Name',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'width' => '25',
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '1',
          'page_num' => 1,
        ),
        2 => array(
          'pid' => '0',
          'form_key' => 'email_address',
          'name' => 'Email Address',
          'type' => 'email',
          'value' => '%useremail',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'width' => '25',
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '2',
          'page_num' => 1,
        ),
        3 => array(
          'pid' => '0',
          'form_key' => 'phone_number',
          'name' => 'Phone Number',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'width' => '25',
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '3',
          'page_num' => 1,
        ),
        4 => array(
          'pid' => '0',
          'form_key' => 'questions_or_comments',
          'name' => 'Questions or Comments',
          'type' => 'textarea',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'private' => 0,
            'resizable' => 1,
            'disabled' => 0,
            'conditional_operator' => '=',
            'cols' => '',
            'rows' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '4',
          'page_num' => 1,
        ),
      ),
    ),
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/oc_webform',
      'router_path' => 'node/%',
      'link_title' => 'Contact Us',
      'options' => array(),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '-42',
      'identifier' => 'main-menu:node-name/oc_webform',
    ),
    'title' => 'Contact Us',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'webform',
    'language' => 'und',
    'created' => '1323220131',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'oc_webform',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'We at OpenChurch hope that if you have any questions, concerns, needs that you will feel free to contact us at anytime. You may contact us by any of the methods below or by filling out the form at the bottom of this page. Please keep in mind if use any method other than phone it will take some time to get into the hands of the appropriate person. We look forward to speaking with you soon.',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p>We at OpenChurch hope that if you have any questions, concerns, needs that you will feel free to contact us at anytime. You may contact us by any of the methods below or by filling out the form at the bottom of this page. Please keep in mind if use any method other than phone it will take some time to get into the hands of the appropriate person. We look forward to speaking with you soon.</p>
  ',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
