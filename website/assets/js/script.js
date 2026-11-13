// Navbar
document.querySelectorAll('.nav-link').forEach(link => {
  const href = link.getAttribute('href');
  const path = window.location.pathname;

  if (href === '/' && path === '/') {
    link.classList.add('active');
  } 

  else if (href !== '/' && path.startsWith(href)) {
    link.classList.add('active');
  }
});


// Burger
const navToggle = document.getElementById('navToggle');
const navMenu = document.getElementById('navMenu');
const page_header = document.querySelector('.page-header');

if (navToggle) {
  navToggle.addEventListener('click', () => {
    navMenu.classList.toggle('active');
    navToggle.classList.toggle('active');
    
    if (navMenu.classList.contains('active')) {
      page_header.style.opacity = '0';
      page_header.style.visibility = 'hidden';
      page_header.style.zIndex = '-1';
    } else {
      page_header.style.opacity = '1';
      page_header.style.visibility = 'visible';
      page_header.style.zIndex = '1';
    }
  });
  
  document.querySelectorAll('.nav-link').forEach(link => {
    link.addEventListener('click', () => {
      navMenu.classList.remove('active');
      navToggle.classList.remove('active');
      page_header.style.opacity = '1';
      page_header.style.visibility = 'visible';
      page_header.style.zIndex = '1';
    });
  });
  
  document.addEventListener('click', (e) => {
    if (!navToggle.contains(e.target) && !navMenu.contains(e.target)) {
      navMenu.classList.remove('active');
      navToggle.classList.remove('active');
      page_header.style.opacity = '1';
      page_header.style.visibility = 'visible';
      page_header.style.zIndex = '1';
    }
  });
}

document.querySelectorAll('a[href^="#"]').forEach(anchor => {
  anchor.addEventListener('click', function (e) {
    e.preventDefault();
    const target = document.querySelector(this.getAttribute('href'));
    if (target) {
      target.scrollIntoView({
        behavior: 'smooth',
        block: 'start'
      });
    }
  });
});

